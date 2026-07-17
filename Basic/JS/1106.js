const readline=require("readline");
const r=readline.createInterface({
	input:process.stdin,
	output:process.stdout,
})

const a=[2,0,1,9];

r.on("line",line=>{
	const n=Number(line);
	for(let i=0;i<n;i++){
		if(i>=4) a.push((a[i-1]+a[i-2]+a[i-3]+a[i-4])%10);
		r.output.write(a[i].toString());
	}
	r.close();
})