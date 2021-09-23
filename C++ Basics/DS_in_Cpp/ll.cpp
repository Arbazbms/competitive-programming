#include<bits/stdc++.h>

struct node {
    int data;
    struct node *next;
};

typedef struct node * NODE;

NODE getnode() {
    
   NODE p = new node();
    if (p != NULL) return p;
    else {
        printf("No Memory \n");
        return NULL;
    }
}

NODE insert_front(int item, NODE head) {
    NODE p;
    p = getnode();
    p -> data = item;
    p -> next = head;
    head = p;
    printf("Inserted \n");
    return head;
}

NODE insert_back(int item, NODE head) {
    NODE p, q;
    q = getnode();
    q -> data = item;
    q -> next = NULL;
    if (head == NULL) return q;
    p = head;
    while (p -> next != NULL) p = p -> next;
    p -> next = q;
    printf("Inserted \n");
    return head;
}

NODE insert_pos(int item, int pos, NODE head) {
    NODE curr, prev = NULL, newn;
    int count = 1;
    newn = getnode();
    newn -> data = item;
    newn -> next = NULL;
    curr = head;
    if (curr == NULL && pos == 1) {
    	return newn;
    }
    if(curr == NULL && pos!=1){
    	printf("invalid position\n");
    	return head;
	}
    if (pos == 1) {
        newn -> next = curr;
        head = newn;
        return head;
    } 
    
        while (curr != NULL && count != pos) {
            prev = curr;
            curr = curr -> next;
            count ++;
        }
        if (pos == count) {
            prev -> next = newn;
            newn -> next = curr;
	    	return head;
        } else {
            printf("Invalid Position \n");
            return head;
        } 
    
}


NODE deletefront(NODE head) {
	NODE p = head;
	if (head == NULL) {
		printf("Empty \n");
		return head;
	}
	printf("Deleted \n");
	head = p -> next;
	delete(p);
	return head;
}

void display (NODE head) {
    NODE p;
    if (head == NULL) {
        printf("Empty List \n");
        return;
    }
    p = head;
    while (p != NULL) {
        printf("%d \t", p -> data);
        p = p -> next;
    }
    printf("\n");
}

int main() {
    int choice, pos, ele;
    NODE head = NULL;
    
    while(1){
	
        printf("1. Enter from Front \n");
        printf("2. Enter from End \n");
        printf("3. Enter from Position \n");
        printf("4. Display \n");
		printf("5. Exit \n");
		printf("6 delete from front\n");
        printf("Enter Choice \n");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: printf("Enter Element \n");
                    scanf("%d", &ele);
                    head = insert_front(ele, head);
                    break;
            
            case 2: printf("Enter Element \n");
                    scanf("%d", &ele);
                    head = insert_back(ele, head);
                    break;
                    
            case 3: printf("Enter Element and Position\n");
                    scanf("%d %d", &ele, &pos);
                    head = insert_pos(ele, pos, head);
                    break;
                    
            case 4: display(head);
                    break;

		    case 5: exit(0);
                    break;
                    
            case 6: head = deletefront(head);
		            break;
            
            default: printf("Invalid Choice \n");
        }
        
        
    }

    return 0;
}
