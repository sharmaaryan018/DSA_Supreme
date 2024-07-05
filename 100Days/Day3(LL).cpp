

// vector<int> nodeetweenCriticalPoints(ListNode* head) {
//     ListNode* prev = head;
//     ListNode* curr = head-> next;

//     int i = 1;
//     int prevCriticalPosition = 0;
//     int firstCriticalPosition = 0;

//     while(curr->next != NULL) {
//         if(curr->val < prev-> val && curr->value < cur->next->val || curr->val > prev-> val && curr->value > cur->next->val ) {

//             if(prevCriticalPosition = 0) {
//                 prevCriticalPosition = i;
//                 firstCriticalPosition = i;
//             }
//             else {
//                 minDist = min(minDist,i - prevCriticalPosition);
//                 prevCriticalPosition=i;
//             }
//         }
//         i++;
//         prev=curr;
//         curr= curr->next;


//     }
//     if(minDist == INT_MAX) {
//         return {-1,-1}
//     }

//     return{minDist,prevCriticalPosition - firstCriticalPosition}
// }

vector<int> nodeetweenCriticalPoints(ListNode* head) {
    int prevVal =0;
    int currVal =0;
    int nextVal =0;

    int minDist = INT_MAX;
    int firstCriticalPosition =0;
    int prevCriticalPosition =0;

    int i=0;
    vector<int> result {-1,-1};

    while(head!=NULL) {
        prevVal = currVal;
        currVal = nextVal;
        nextVal = head->val;


        if(prevVal !=0 && currVal !=0 && nextVal !=0) && (prevVal > currVal && currVal < nextVal ||  prevVal < currVal && currVal > nextVal) {

            if(firstCriticalPosition =0) {
                firstCriticalPosition = i;
            }
            else {
                minDist(minDist, i - prevCriticalPosition);

                result = {minDist, i -firstCriticalPosition};
            }

            prevCriticalPosition = i;
        }
        i++;
        head = head->next;

    }
    return result;
}