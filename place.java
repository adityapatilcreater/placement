import java.util.*;


public class place {

  public static void main(String[] args) {
    
    Scanner sc = new Scanner(System.in);
    
    System.out.print("Enter number of words: ");
    int numWords = sc.nextInt();
    
    sc.nextLine(); 
    
    System.out.print("Enter sentence: ");  
    String sentence = sc.nextLine();
    
    String[] words = sentence.split(" ");
    
    int maxOddLength = 0;
    String maxOddWord = "";
    
    for(String word : words) {
      if(word.length() % 2 == 1 && word.length() > maxOddLength) {
        maxOddLength = word.length();
        maxOddWord = word;
      }
    }
    
    if(maxOddLength > 0) {
      System.out.println("Computer picked: " + maxOddWord); 
    }
    else {
      System.out.println("Try Again");
    }
    
  }

}
