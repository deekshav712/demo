function p() 
{
    pb=document.getElementById("stdpb")
    pbar="0";
    comp=document.getElementsByName("std")
    for(i=0;i<comp.length;i++) 
    {
        if(comp[i].validity.valid)
        {
            alert(pbar);
            pbar++;
        }
    }
    pb.value=(pbar*(100/comp.length));
}