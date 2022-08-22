class queueException extends Exception{
    public void Error()
    {
        System.out.println("QUEUE IS FULL");
    }
}
class queue_demo{
int front;
int rear;
int q[];
queue_demo(int n)
{
    q=new int[n];
}
void Insert(int ele)throws queueException
{
    if(rear>=q.length-1)
    {
        throw new queueException();
    }
    if(front==-1)
    front=0;
    q[rear++]=ele;
}
int delete()
{
  int ele;
  if(front==-1)
  { 
    throw new ArrayIndexOutOfBoundsException();
  }
  if(front==rear)
  {
    ele=q[front];
    rear=front=-1;
  }
  else{
    ele=q[front++];
  }
  return ele;
}
 void display()
 {
    if(front==-1)
    {
        System.out.println("QUEUE IS EMPTY");
        return;
    }
    for( int i=front;i<=rear;i++)
    System.out.println(q[i]+"\t");
 }
} 

public class queue {
public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.print("Enter size of queue:\n");
    int size=sc.nextInt();
    queue_demo q= new queue_demo(size);
    try{
        while(true){
            System.out.println("1.Insert 2.delete 3.display");
            System.out.println("Enter your choice:");
            int choice  = sc.nextInt();
            switch(choice)
            {
                case 1:System.out.println("Enter the number to be insert:\n");
                q.Insert(sc.nextInt());
                break;
                case 2:q.delete();
                break;
                case 3:q.display();
                break;
                default:System.out.println("invalid choice");
                return;
            }
        }


    
    } 

 
catch(queueException e)
{
    e.Error();
} 
catch(ArrayIndexOutOfBoundsException e)
{
    System.out.println("queue is empty");
}
}
}
