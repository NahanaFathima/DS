("%d", &choice);
    return choice;
}

int main() {
    Node* root = NULL;
    int choice, element;

    while (1) {
        choice = menu();
        switch (choice) {
            case 1:
                printf("Enter element to insert: ");
                scanf("%d", &element);
                root = insert(root, element);
                printf("Element %d inserted.\n", element);
                break;

            case 2:
                printf("Enter element to delete: ");
                scanf("%d", &element);
                root = deleteNode(root, element);
                printf("Element %d deleted (if it existed).\n", element);
                break;

            case 3:
                printf("In-order traversal: ");
                inOrder(root);
                printf("\n");
                break;

            case 4:
                printf("Pre-order traversal: ");
                preOrder(root);
                printf("\n");
                break;

            case 5:
                printf("Post-order traversal: ");
                postOrder(root);
                printf("\n");
                break;

            case 6:
                printf("Exiting program.\n");
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
