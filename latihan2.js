let lagu = ["Ini Abadi", "Monokrom"];

lagu.splice(1, 0, "everything u are");  
lagu.push("Aitakatta");                 
console.log("Setelah ditambah:", lagu);

lagu.shift();                           
console.log("Sisa lagu:", lagu);
