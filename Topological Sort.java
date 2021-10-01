
```
class Solution {
    // Function to return list containing vertices in Topological order.
    static int[] topoSort(int V, ArrayList<ArrayList<Integer>> adj) {
        int[] ans = new int[V];
        int k = 0;
        boolean[] visited = new boolean[V];
        int[] degree = new int[V];
        for (int i = 0; i < adj.size(); i++) {
            ArrayList<Integer> nbrs = adj.get(i);
            for (int nbr : nbrs) {
                degree[nbr]++;
            }
        }
        LinkedList<Integer> queue = new LinkedList<>();
        for (int i = 0; i < degree.length; i++) {
            if (degree[i] == 0) {
                queue.addLast(i);
                visited[i] = true;
            }
        }
        while (queue.size() != 0) {
            int rem = queue.removeFirst();
            ans[k++] = rem;
            ArrayList<Integer> nbrs = adj.get(rem);
            for (int nbr : nbrs) {
                degree[nbr]--;
                if (degree[nbr] == 0 && visited[nbr] == false) {
                    queue.addLast(nbr);
                    visited[nbr] = true;
                }
            }
        }
        return ans;
    }
}
```
