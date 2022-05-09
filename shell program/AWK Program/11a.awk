#Write an awk script to find out total number of books sold in each discipline as well as total
#book sold using associate array down table as given below.
#Electrical 34
#Mechanical 67
#Electrical 80
#Computer Science 43
#Civil 98
#Mechanical 65
#Computer Science 64
BEGIN{
	FS="|"
	printf"Book Details\n---------------------------------------------"
	printf"\nSLN\tDepartment\t\tTotalBookS"
}

{
	book[$1]+=$2
	total+=$2
}

END{
	for(i in book){
		SN++
		printf("\n%d\t%-20s\t%d",SN,i,book[i])
	}
	printf("\n----------------------------------------------")
	printf("\nTotal Books:%d",total)
}
