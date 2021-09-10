^j::
SendRaw , int ans = 0;
Send {Enter}
SendRaw ,     for(int i = 0; i < n; i++)
Send {Enter}
SendRaw ,     {
Send {Enter}
SendRaw ,         int k;
Send {Enter}
SendRaw ,         if(numTasks[i]  batchSize[i]) k = ((numTasks[i]/batchSize[i]) + 1) * processingTime[i];
Send {Enter}
SendRaw ,         else k = (numTasks[i]/batchSize[i]) * processingTime[i];
Send {Enter}
SendRaw ,         if(k > ans) ans = k;
Send {Enter}
SendRaw ,     }
Send {Enter}
SendRaw ,     cout << ans;
Send {Enter}
return