#include<stdio.h>
#include<conio.h>

typedef struct node
{
  struct node *next;
  int vertex;
}node;

node *g[20];
int n,visited[20];
int indegree(int i);
int outdegree(int i);
void dfs(int i);

void insert(int vi,int vj)
{
 node *p,*q;
 q=(node*)malloc(sizeof(node));
 q->vertex=vj;
 q->next=NULL;

 if(g[vi]==NULL)
    g[vi]=q;
 else
 {
   p=g[vi];
   while(p->next!=NULL)
    p=p->next;
   p->next=q;
 }
}

void readgraph()
{
 int vi,vj,i,j,k,no_of_edges;
 for(i=0;i<n;i++)
    g[i]=NULL;
 printf("\nEnter the no. of Vertices::");
 scanf("%d",&n);
 printf("\nEnter the no of Edges::");
 scanf("%d",&no_of_edges);
 for(i=0;i<no_of_edges;i++)
 {
    printf("\nEnter the Edge(u,v)::");
    scanf("%d%d",&vi,&vj);
    insert(vi,vj);
  }
}


void main()
{
  int i,j,k;

  readgraph();
  for(i=0;i<n;i++)
    visited[i]=0;

 printf("\n=====================================================");
  printf("\nNode\tIndegree\tOutdegree");
  printf("\n=====================================================");
  for(i=0;i<n;i++)
  {
   j=indegree(i);
   k=outdegree(i);
   printf("\n%2d\t%4d\t\t%5d",i,j,k);
   }
  printf("\n-----------------------------------------------------");

  dfs(0);
  getch();
}

int outdegree(int i)
{
  int j=0;
  node *p;
  p=g[i];
  while(p!=NULL)
  {
   p=p->next;
   j++;
  }
  return(j);
}

int indegree(int v)
{
  int i,j=0,k;
  node *p;
  for(i=0;i<n;i++)
  {
    p=g[i];
    while(p!=NULL)
    {
      if(p->vertex==v)
        j++;
      p=p->next;
    }
  }
  return(j);
}

void dfs(int i)
{
 node *p;
 p=g[i];
 visited[i]=1;
 printf("\nVisit->%d",i);
 while(p!=NULL)
 {
   i=p->vertex;
   if(!visited[i])
    dfs(i);
   p=p->next;
 }
}
