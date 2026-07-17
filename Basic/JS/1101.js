const readline=require("readline");
const r=readline.createInterface({
	input:process.stdin,
	output:process.stdout,
})

r.on("line",line=>{
	const l=line.split(" ").map(item=>parseInt(item));
	const a=l[0],d=l[1];
	b=parseInt(a.toString().substring(a.toString().length-d)+a.toString().substring(0,a.toString().length-d));
	console.log((b/a).toFixed(2));
	r.close();
})