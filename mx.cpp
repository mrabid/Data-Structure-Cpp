struct Student
{
  string name;
  int id;
  int math;
  int english;

  Student *link;
};

void
InsertAtEnd (Student * &head, Student * &tail, string name, int id, int math,
	     int english)
{
  Student *newNode = new Student;

  newNode->name = name;
  newNode->id = id;
  newNode->math = math;
  newNode->english = english;
  newNode->link = NULL;

  if (head == NULL)
    {
      head = newNode;
      tail = newNode;
    }
  else
    {
      tail->link = newNode;
      tail = newNode;
    }
}

void
showList (Student * n)
{
  while (n != NULL)
    {
      cout << "Name: " << n->name << endl;
      cout << "Id: " << n->id << endl;
      cout << "Math: " << n->math << endl;
      cout << "English: " << n->english << endl;
      cout << endl;
      n = n->link;
    }

}

void
updateStudent (Student * n, int id)
{
  while (n != NULL)
    {
      if (n->id == id)
	{
	  cout << "Name: ";
	  cin >> n->name;
	  cout << "Math: ";
	  cin >> n->math;
	  cout << "English: ";
	  cin >> n->english;
	  cout << endl;
	  break;
	}
      n = n->link;
    }

}

void
totalMarks (Student * n, int id)
{
  while (n != NULL)
    {
      if (n->id == id)
	{
	  int totalMarks = n->math + n->english;

	  cout << "Total= " << totalMarks << endl;
	  break;
	}
      n = n->link;
    }

}



int
main ()
{
  Student *head = NULL;
  Student *tail = NULL;
  InsertAtEnd (head, tail, "Sara", 123, 55, 76);
  InsertAtEnd (head, tail, "Zara", 321, 23, 53);
  showList (head);
  updateStudent (head, 321);
  showList (head);
  totalMarks (head, 123);


}
