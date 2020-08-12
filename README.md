# bigio_test

### No 5
dibuat API dengan endpoint:
1. localhost:3000/api/signup -> POST - untuk menambah user baru dengan masukan {email, password, role}
2. localhost:3000/api/komoditas -> POST - menambah data komoditas oleh user dengan role surveyor {name, price, date, market}
3. localhost:3000/api/komoditas -> GET - menampilkan data komoditas yang sudah *accepted*
4. localhost:3000/api/komoditas/:id -> PUT - mengubah status pada komoditas dengan parameter id dan masukan {status} oleh user dengan role admin

untuk memanggil API selain signup, menggunakan header **x-access-token**
