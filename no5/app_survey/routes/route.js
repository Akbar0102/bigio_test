const express = require('express');
const router = express.Router();
const userController = require('../controllers/userController');
const komoditasController = require('../controllers/komoditasController');
 
router.post('/signup', userController.signup);
router.post('/login', userController.login);

router.get('/komoditas', userController.allowIfLoggedin, userController.grantAccess('readAny', 'produk'), komoditasController.getKomoditas);
router.post('/komoditas', userController.allowIfLoggedin, userController.grantAccess('createAny', 'produk'), komoditasController.addKomoditas);
router.put('/komoditas/:id', userController.allowIfLoggedin, userController.grantAccess('createAny', 'produk'), komoditasController.setKomoditas);
 
 
module.exports = router;