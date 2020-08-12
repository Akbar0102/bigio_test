const mongoose = require('mongoose');
const Schema = mongoose.Schema;

const KomoditasSchema = new Schema({
    name:{
        type: String
    },
    price:{
        type: Number
    },
    date:{
        type: Date
    },
    market: {
        type: String
    },
    status: {
        type: String,
        default: 'not_accepted',
        enum: ["accepted", "not_accepted"]
    }
});

const Komoditas = mongoose.model('komoditas', KomoditasSchema);
 
module.exports = Komoditas;