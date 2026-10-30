let tas = ["Pedang Kayu", "Perisai Besi"];

tas.unshift("Potion Darah");     
tas.splice(2, 0, "Busur Panah"); 
console.log("Setelah ditambah:", tas);

tas.pop();                      
console.log("Isi tas akhir:", tas);
