class Solution 
{
public:
    
    int bfsAndReturn(unordered_map<int, Employee*> & employeeId, int id)
    {
        queue<Employee*> employeeQueue;
        employeeQueue.push(employeeId[id]);
        
        int totalImportance{0};
        
        while (!employeeQueue.empty())
        {
            Employee* currentEmployee = employeeQueue.front();
            totalImportance += currentEmployee->importance;
            employeeQueue.pop();
            
            for(const int sbId: currentEmployee->subordinates)
            {
                Employee* sb = employeeId[sbId];
                employeeQueue.push(sb);
            }
        }
        return totalImportance;
    }
    
    int getImportance(vector<Employee*> employees, int id) 
    {
        unordered_map<int, Employee*> employeeId;
        for (const auto e: employees)
        {
            employeeId[e->id] = e;
        }
        return bfsAndReturn(employeeId,id);
    }
};
