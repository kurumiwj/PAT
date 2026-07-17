const readline=require("readline");
const r=readline.createInterface({
	input:process.stdin,
	output:process.stdout,
})

let index=0;
const a=[];
let n,k,x,cnt=1;
r.on("line",line=>{
	if(index==0){
		const l=line.split(" ").map(item=>parseInt(item));
		n=l[0],k=l[1],x=l[2];
		index++;
	}
	else if(index++<=n){
		let l_temp=line.split(" ").map(item=>parseInt(item));
		a.push(l_temp);
	}
	if(index>n){
		for(let i=0;i<n;i++){
			if((i+1)%2){
				for(let j=n-1;j>=cnt;j--)
					a[i][j]=a[i][j-cnt];
				for(let j=0;j<cnt;j++)
					a[i][j]=x;
				cnt=cnt<k ? cnt+1 : 1;
			}
		}
		for(let i=0;i<n;i++){
			let sum=0;
			for(let j=0;j<n;j++){
				sum+=a[j][i];
			}
			if(i!=0) r.output.write(" ");
			r.output.write(sum.toString());
		}
		r.close();
	}
})