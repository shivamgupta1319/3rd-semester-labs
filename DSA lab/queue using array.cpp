//Queue in Static
#include<stdio.h>
#include<stdlib.h>
//Creating structer of Queue
struct queue
{
        int capacity, front, rear;
        int *arr;
};
//Declaration of functions
struct queue *CreateQueue();
void AddQ(struct queue *);
void DelQ(struct queue *);
void view(struct queue *);
// Creating Queue
struct queue *CreateQueue()
{
        struct queue *q;
        q = (struct queue *)malloc(sizeof(struct queue));
        printf(("Enter the capacity of queue =&gt; &quot;);
        scanf(&quot;%d&quot;, &amp;q-&gt;capacity);
        q->front = -1;
        q->rear = -1;
        q->arr = (int *)malloc(sizeof(int) * q-&gt;capacity);
        return q;
}
//Adding data into queue
void AddQ(struct queue *q)
{
        if (q-&gt;rear == q-&gt;capacity - 1)
        {
                printf(&quot;Queue is full\n&quot;);
                return;
        }
        else
        {
                q-&gt;rear++;
                printf(&quot;Enter the data =&gt; &quot;);
                scanf(&quot;%d&quot;, &amp;q-&gt;arr[q-&gt;rear]);
                if (q-&gt;front == -1)
                {
                        q-&gt;front = 0;
                }
        }

        printf(&quot;----------------------------Insertion of data in queue is done successfully--
--------------------------\n&quot;);
}
//Delecting data from queue
void DelQ(struct queue *q)
{
        int item, i;
        if (q-&gt;front == q-&gt;rear)
        {
                printf(&quot;Queue is Empty\n&quot;);
        }
        else
        {
                item = q-&gt;arr[q-&gt;front];
                /***
                 * For Normal Queue
                 * q-&gt;arr[q-&gt;front] = 0;
                 * q-&gt;front++;
                 ***/
                /***
                 * For Circular Queue
                 ***/
                if (q-&gt;rear == 0)
                {
                        q-&gt;front, q-&gt;rear = -1;
                }
                else
                {
                        for (i = 0; i &lt; q-&gt;rear; i++)
                        {
                                q-&gt;arr[i] = q-&gt;arr[i + 1];
                        }
                        q-&gt;rear--;
                }
        }
        printf(&quot;----------------------------
Deletion of %d element in queue is done successfully----------------------------\n&quot;, item);
}
//Displaying the content of queue
void view(struct queue *q)
{
        int i;
        if (q-&gt;front == q-&gt;rear)
        {
                printf(&quot;Queue is Empty\n&quot;);
        }

        else
        {
                printf(&quot;The content of queue is:- \n\t&quot;);
                for (i = q-&gt;front; i &lt;= q-&gt;rear; i++)
                {
                        printf(&quot;%d &quot;, q-&gt;arr[i]);
                }
                printf(&quot;\n&quot;);
        }
}
//main function of the program
int main()
{
        int created = 0, ch, n, i;
        struct queue *q;
        //Operations list/Menu
        printf(&quot;\n\n Menu of Operation\n&quot;);
        printf(&quot;--------------------------------------------------------\n&quot;);
        printf(&quot;\t\t 1-&gt; Creating Queue\n&quot;);
        printf(&quot;\t\t 2-&gt; To add data in queue\n&quot;);
        printf(&quot;\t\t 3-&gt; To delect data from queue\n&quot;);
        printf(&quot;\t\t 4-&gt; To view the queue\n&quot;);
        printf(&quot;\t\t 5-&gt; Exit\n&quot;);
        printf(&quot;-----------------------------------------------------------------------------
----\n&quot;);
        printf(&quot;-----------------------------------------------------------------------------
----\n&quot;);
        while (1)
        {
                printf(&quot;Enter your choice =&gt; &quot;);
                scanf(&quot;%d&quot;, &amp;ch);
                switch (ch)
                {
                case 1:
                        if (created == 0)
                        {
                                q = CreateQueue();
                                created++;
                                printf(&quot;Enter the number of data you want to enter in queue =
&gt; &quot;);
                                scanf(&quot;%d&quot;, &amp;n);
                                for (i = 0; i &lt; n; i++)
                                {
                                        AddQ(q);
                                }
                                printf(&quot;\n***********************************--
Queue has been Created susscessfully--***********************************\n&quot;);

                        }
                        else
                        {
                                printf(&quot;Queue has already been created \n&quot;);
                        }
                        break;
                case 2:
                        if (created == 0)
                        {
                                q = CreateQueue();
                                created++;
                                AddQ(q);
                        }
                        else
                        {
                                AddQ(q);
                        }
                        break;
                case 3:
                        DelQ(q);
                        break;
                case 4:
                        view(q);
                        break;
                case 5:
                        exit(0);
                        break;
                default:
                        printf(&quot;Invalid input\n&quot;);
                }
        }
        return 0;
}

//Queue in Static Variation of circular Queue
#include &lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
//Creating structer of Queue
struct queue
{
    int capacity, front, rear;
    int *arr;
};

//Declaration of functions
struct queue *CreateQueue();
void AddQ(struct queue *);
void DelQ(struct queue *);
void view(struct queue *);
// Creating Queue
struct queue *CreateQueue()
{
    struct queue *q;
    q = (struct queue *)malloc(sizeof(struct queue));
    printf(&quot;Enter the capacity of queue =&gt; &quot;);
    scanf(&quot;%d&quot;, &amp;q-&gt;capacity);
    q-&gt;front = -1;
    q-&gt;rear = -1;
    q-&gt;arr = (int *)malloc(sizeof(int) * q-&gt;capacity);
    return q;
}
//Adding data into queue
void AddQ(struct queue *q)
{
    if ((q-&gt;front == 0 &amp;&amp; q-&gt;rear == q-&gt;capacity - 1) ||
        (q-&gt;rear == (q-&gt;front - 1) % (q-&gt;capacity - 1)))
    {
        printf(&quot;\nQueue is Full&quot;);
        return;
    }
    else if (q-&gt;front == -1) /* Insert First Element */
    {
        q-&gt;front = q-&gt;rear = 0;
        printf(&quot;Enter the data =&gt; &quot;);
        scanf(&quot;%d&quot;, &amp;q-&gt;arr[q-&gt;rear]);
        printf(&quot;----------------------------Insertion of data in queue is done successfully--
--------------------------\n&quot;);
    }
    else if (q-&gt;rear == q-&gt;capacity - 1 &amp;&amp; q-&gt;front != 0)
    {
        q-&gt;rear = 0;
        printf(&quot;Enter the data =&gt; &quot;);
        scanf(&quot;%d&quot;, &amp;q-&gt;arr[q-&gt;rear]);
        printf(&quot;----------------------------Insertion of data in queue is done successfully--
--------------------------\n&quot;);
    }
    else
    {
        q-&gt;rear++;
        printf(&quot;Enter the data =&gt; &quot;);

        scanf(&quot;%d&quot;, &amp;q-&gt;arr[q-&gt;rear]);
        printf(&quot;----------------------------Insertion of data in queue is done successfully--
--------------------------\n&quot;);
    }
}
//Delecting data from queue
void DelQ(struct queue *q)
{
    int item;
    if (q-&gt;front == -1)
    {
        printf(&quot;\nQueue is Empty&quot;);
        return;
    }
    else
    {
        item = q-&gt;arr[q-&gt;front];
        q-&gt;arr[q-&gt;front] = -1;
        if (q-&gt;front == q-&gt;rear)
        {
            q-&gt;front = -1;
            q-&gt;rear = -1;
        }
        else if (q-&gt;front == q-&gt;capacity - 1)
            q-&gt;front = 0;
        else
            q-&gt;front++;
        printf(&quot;----------------------------
Deletion of %d element in queue is done successfully----------------------------\n&quot;, item);
    }
}
//Displaying the content of queue
void view(struct queue *q)
{
    int i;
    if (q-&gt;front == -1) 
    { 
        printf(&quot;\nQueue is Empty&quot;); 
        return; 
    } 
    printf(&quot;\nElements in Circular Queue are: &quot;); 
    if (q-&gt;rear &gt;= q-&gt;front) 
    { 
        for (i = q-&gt;front; i &lt;= q-&gt;rear; i++) 
            printf(&quot;%d &quot;,q-&gt;arr[i]); 
    } 
    else

    { 
        for (i = q-&gt;front; i &lt; q-&gt;capacity; i++) 
            printf(&quot;%d &quot;, q-&gt;arr[i]); 
  
        for (i = 0; i &lt;= q-&gt;rear; i++) 
            printf(&quot;%d &quot;, q-&gt;arr[i]);
    }
    printf(&quot;\n&quot;);
}
//main function of the program
int main()
{
    int created = 0, ch, n, i;
    struct queue *q;
    //Operations list/Menu
    printf(&quot;\n\n Menu of Operation\n&quot;);
    printf(&quot;--------------------------------------------------------\n&quot;);
    printf(&quot;\t\t 1-&gt; Creating Queue\n&quot;);
    printf(&quot;\t\t 2-&gt; To add data in queue\n&quot;);
    printf(&quot;\t\t 3-&gt; To delect data from queue\n&quot;);
    printf(&quot;\t\t 4-&gt; To view the queue\n&quot;);
    printf(&quot;\t\t 5-&gt; Exit\n&quot;);
    printf(&quot;---------------------------------------------------------------------------------
\n&quot;);
    printf(&quot;---------------------------------------------------------------------------------
\n&quot;);
    while (1)
    {
        printf(&quot;Enter your choice =&gt; &quot;);
        scanf(&quot;%d&quot;, &amp;ch);
        switch (ch)
        {
        case 1:
            if (created == 0)
            {
                q = CreateQueue();
                created++;
                printf(&quot;Enter the number of data you want to enter in queue =&gt; &quot;);
                scanf(&quot;%d&quot;, &amp;n);
                for (i = 0; i &lt; n; i++)
                {
                    AddQ(q);
                }
                printf(&quot;\n***********************************--
Queue has been Created susscessfully--***********************************\n&quot;);
            }
            else

            {
                printf(&quot;Queue has already been created \n&quot;);
            }
            break;
        case 2:
            if (created == 0)
            {
                q = CreateQueue();
                created++;
                AddQ(q);
            }
            else
            {
                AddQ(q);
            }
            break;
        case 3:
            DelQ(q);
            break;
        case 4:
            view(q);
            break;
        case 5:
            exit(0);
            break;
        default:
            printf(&quot;Invalid input\n&quot;);
        }
    }
    return 0;
}
