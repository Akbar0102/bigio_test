const Komoditas = require('../models/komoditasModel');

exports.getKomoditas = async (req, res, next) => {
    const komoditas = await Komoditas.find({status: 'accepted'});
    res.status(200).json({
        data: komoditas
    });
}

exports.addKomoditas = async (req, res, next) => {
    try {
        const { name, price, date, market } = req.body
        const newProduct = new Komoditas({ name, price, date, market });
        await newProduct.save();
        res.json({
            data: newProduct
        });
    } catch (error) {
        next(error)
    }
}

exports.setKomoditas = async (req, res, next) => {
    try {
        const id  = req.params.id;
        const {status} = req.body;
        const product = await Komoditas.findOne({_id: id});
        product.status = status;
        await product.save();
        res.json({
            message: "komoditas berhasil di set status",
            data: product
        });
    } catch (error) {
        next(error)
    }
}