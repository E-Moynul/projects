import java.util.*;

public class Main {

    static class Problem {
        String expression;
        int result;

        Problem(String expression, int result) {
            this.expression = expression;
            this.result = result;
        }
    }

    public static void easy() {
        List<Problem> problems = new ArrayList<>();
        problems.add(new Problem("5+3", 8));
        problems.add(new Problem("10-4", 6));
        problems.add(new Problem("8*2", 16));
        problems.add(new Problem("16/4", 4));
        problems.add(new Problem("9%4", 1));
        problems.add(new Problem("6+7-3", 10));
        problems.add(new Problem("3*5-2", 13));
        problems.add(new Problem("(8+2)/2", 5));
        problems.add(new Problem("15%6", 3));
        problems.add(new Problem("10-(3+2)", 5));

        Scanner sc = new Scanner(System.in);
        Random rand = new Random();

        while (true) {
            int score = 0;
            int[] randomIndices = new int[5];

            for (int i = 0; i < 5; i++) {
                randomIndices[i] = rand.nextInt(10);
            }

            for (int index : randomIndices) {
                System.out.println("Evaluate This: " + problems.get(index).expression + " = ?");
                int ans = sc.nextInt();

                if (ans == problems.get(index).result) {
                    System.out.println("Correct Answer");
                    score++;
                } else {
                    System.out.println("Wrong Answer");
                }
            }

            System.out.println("Score: " + score + " From 5");
            System.out.println("Do you want to play again?");
            System.out.println("Press 1: YES");
            System.out.println("Press 2: NO");

            int start = sc.nextInt();
            while (start < 1 || start > 2) {
                System.out.println("Invalid Input\nInput Again");
                start = sc.nextInt();
            }

            if (start == 2) {
                break;
            }
        }

        System.out.println("Thanks For Playing");
    }

    public static void medium() {
        List<Problem> problems = new ArrayList<>();
        problems.add(new Problem("25/5+4*3", 17));
        problems.add(new Problem("18-(5*2)", 8));
        problems.add(new Problem("(12+8)%5", 0));
        problems.add(new Problem("6*7-15", 27));
        problems.add(new Problem("(10/2)+(8*3)", 29));    
        problems.add(new Problem("45%(12-7)", 0));
        problems.add(new Problem("(5*3)+(10/2)", 20));
        problems.add(new Problem("(16+4)/(9%7)", 10));
        problems.add(new Problem("(20*2)-(15+3)", 22));
        problems.add(new Problem("6+(8*2)-(9/3)", 19));

        Scanner sc = new Scanner(System.in);
        Random rand = new Random();

        while (true) {
            int score = 0;
            int[] randomIndices = new int[5];

            for (int i = 0; i < 5; i++) {
                randomIndices[i] = rand.nextInt(10);
            }

            for (int index : randomIndices) {
                System.out.println("Evaluate This: " + problems.get(index).expression + " = ?");
                int ans = sc.nextInt();

                if (ans == problems.get(index).result) {
                    System.out.println("Correct Answer");
                    score++;
                } else {
                    System.out.println("Wrong Answer");
                }
            }

            System.out.println("Score: " + score + " From 5");
            System.out.println("Do you want to play again?");
            System.out.println("Press 1: YES");
            System.out.println("Press 2: NO");

            int start = sc.nextInt();
            while (start < 1 || start > 2) {
                System.out.println("Invalid Input\nInput Again");
                start = sc.nextInt();
            }

            if (start == 2) {
                break;
            }
        }

        System.out.println("Thanks For Playing");
    }

    public static void hard() {
        List<Problem> problems = new ArrayList<>();
        problems.add(new Problem("(48/6)+(5*4)-(18%7)", 24));
        problems.add(new Problem("[(36/3)*4]-[50%(8+2)]", 48));
        problems.add(new Problem("(14+6)/[(8%5)+(9-6)]", 3));
        problems.add(new Problem("[(24*3)/(12+4)]+(25%7)", 8));
        problems.add(new Problem("100-[(15/3)*(10%6)]", 80));
        problems.add(new Problem("[(20%9)+8*2]/(16/4)", 4));
        problems.add(new Problem("(5*6)-[(24/4)%(9-6)]", 30));
        problems.add(new Problem("[(30*2)-(18+9)]/(21%5)", 33));
        problems.add(new Problem("(15+5)*[(20/4)%(12-7)]", 0));
        problems.add(new Problem("250/[(45%11)+(8*2)]-(14-9)", 20));


        Scanner sc = new Scanner(System.in);
        Random rand = new Random();

        while (true) {
            int score = 0;
            int[] randomIndices = new int[5];

            for (int i = 0; i < 5; i++) {
                randomIndices[i] = rand.nextInt(10);
            }

            for (int index : randomIndices) {
                System.out.println("Evaluate This: " + problems.get(index).expression + " = ?");
                int ans = sc.nextInt();

                if (ans == problems.get(index).result) {
                    System.out.println("Correct Answer");
                    score++;
                } else {
                    System.out.println("Wrong Answer");
                }
            }

            System.out.println("Score: " + score + " From 5");
            System.out.println("Do you want to play again?");
            System.out.println("Press 1: YES");
            System.out.println("Press 2: NO");

            int start = sc.nextInt();
            while (start < 1 || start > 2) {
                System.out.println("Invalid Input\nInput Again");
                start = sc.nextInt();
            }

            if (start == 2) {
                break;
            }
        }

        System.out.println("Thanks For Playing");
    }

    public static void main(String[] args) {
        System.out.println("\n      MATH GAME       \n");
        System.out.println("Choose Your Difficulty Settings:\n");

        List<String> difficulties = Arrays.asList("Easy", "Medium", "Hard");

        for (int i = 0; i < difficulties.size(); i++) {
            System.out.println("Press " + (i + 1) + ": " + difficulties.get(i));
        }

        Scanner sc = new Scanner(System.in);
        int difficulty = sc.nextInt();

        while (difficulty < 1 || difficulty > 3) {
            System.out.println("Invalid Input\nInput Again");
            difficulty = sc.nextInt();
        }

        if (difficulty == 1) {
            easy();
        } else if (difficulty == 2) {
            medium();
        } else if (difficulty == 3) {
            hard();
        }

        sc.close();
    }
}
