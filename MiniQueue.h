/***********************************
 * MiniQueue
 * Written by Allie Ianello
 ***********************************/
#define LIST_MAX  10

template <class item>
class miniqueue
{ 
public:
	miniqueue();
	void push(item x);
	void pop();
	item front();
	int size();
private:
	int length;
	item queue[LIST_MAX];
};

/**********************************
 * Constructor
 **********************************/
template <class item>
miniqueue<item>::miniqueue()
{ 
	length = 0;
}

/**********************************
 * Push
 **********************************/
template <class item>
void miniqueue<item>::push(item x)
{
	if (length >= LIST_MAX)
	{
		cout << "Miniqueue overflow!" << endl;
	}
	else
	{
		queue[length++] = x;
	}
	
}


/**********************************
 * Pop
 **********************************/
template <class item>
void miniqueue<item>::pop()
{
	int i;

	if (length <= 0)
	{
		cout << "Miniqueue underflow!" << endl;
	}
	else
	{
		length--;
		for (i = 0; i < length; i++)
			queue[i] = queue[i + 1];
	}

}

/**********************************
 * Front
 **********************************/
template <class item>
item miniqueue<item>::front()
{

	if (length == 0)
	{
		cout << "Miniqueue underflow!" << endl;
	}
	return queue[0];

}

/**********************************
 * Size
 **********************************/
template <class item>
int miniqueue<item>::size()
{
	return length;
}


