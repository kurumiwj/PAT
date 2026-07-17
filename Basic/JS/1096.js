const readline=require("readline");
const r=readline.createInterface({
	input:process.stdin,
	output:process.stdout,
});

let k=-1;
const fact=[];
const fourSum=new Set();

function isBigBeauty(n){
	fact.length=0;
	fourSum.clear();
	totalFact(n);
	fourNumSum(0,1,fact);
	for(let i of fourSum){
		if(i%n==0) return true;
	}
	return false;
}

function fourNumSum(sum,total,v){
	if(total>4) return ;
	for(let i=0;i<v.length;i++){
		if(total===4){
			fourSum.add(sum+v[i]);
		}
		const v0=[...v];
		v0.splice(i,1);
		fourNumSum(sum+v[i],total+1,v0);
	}
}

function totalFact(n){
	for(let i=1;i<=n;i++)
		if(n%i===0) fact.push(i);
}

r.on("line",line=>{
	if(k<0){
		k=Number(line);
	}else{
		l=line.split(" ").map(item=>Number(item));
		for(let i of l){
			if(isBigBeauty(i)) console.log("Yes");
			else console.log("No");
		}
		r.close();
	}
})