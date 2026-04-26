import java.util.*;
class Solution {
    public int solution(int cacheSize, String[] cities) {
        int result =0;
        ArrayList<String> caches = new ArrayList<>();
        if(cacheSize==0) return cities.length*5;
        for(int i=0; i< cities.length; i++){
            cities[i] = cities[i].toUpperCase();
            if(caches.contains(cities[i])){
                result+=1;
                caches.remove(cities[i]);
                caches.add(cities[i]);
            }else{
                if(caches.size() >= cacheSize){
                    caches.remove(0);
                    caches.add(cities[i]);
                }else{
                caches.add(cities[i]);
                }
                result+=5;
            }   
        }
        return result;
        
        
        // int answer = 0;
        // if(cacheSize==0) return cities.length*5;
        // LinkedList<String> caches = new LinkedList<>();
        // for(int i=0; i< cities.length; i++){
        //     String findCities = cities[i].toUpperCase();
        //     if(caches.contains(findCities)){
        //         caches.remove(caches.indexOf(findCities));
        //         caches.add(findCities);
        //         answer++;
        //     }else{
        //         if(caches.size()>=cacheSize){
        //             caches.remove();
        //             caches.add(findCities);
        //             answer+=5;
        //         }else{
        //             caches.add(findCities);
        //             answer+=5;
        //         }
        //     }
        // }
        // return answer;
    }
}