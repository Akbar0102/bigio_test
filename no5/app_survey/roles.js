const AccessControl = require("accesscontrol");
const ac = new AccessControl();
 
exports.roles = (function() {
    ac.grant("pengunjung")
    .readAny("produk")
 
    ac.grant("surveyor")
    .extend("pengunjung")
    .createAny("produk")
    
    ac.grant("admin")
    .extend("pengunjung")
    .extend("surveyor")
    .updateAny("produk")
    .deleteAny("produk")
 
    return ac;
})();