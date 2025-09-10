class Waka_Waka_Song {
    // Waka_Waka_Song() {
    //     System.out.println("Song--Initializing Waka Waka by Shakira...");
    // }

    public  void play() {
        System.out.println("Song-- Playing...");
    }
}

class Spotify extends Waka_Waka_Song {
    Spotify() {
        //super(); // Explicitly call the superclass constructor
        System.out.println("Spotify...");
    }

    public void play() {
        System.out.println("Spotify-- Playing.. ");
    }
}

class Amazon_Music extends Waka_Waka_Song {
    Amazon_Music() {
        super(); // Explicitly call the superclass constructor
        System.out.println("Amazon Music...");
    }

    public void play() {
        System.out.println("Amazon Prime-- Playing...");
    }
}

public class User {
    public static void main(String[] args) {
        System.out.println("Playing Waka Waka on Spotify... ");
        Spotify s = new Spotify();
        s.play();

        System.out.println("\nPlaying Waka Waka on Amazon Music");
        Amazon_Music p = new Amazon_Music();
        p.play();
        Waka_Waka_Song w = new Waka_Waka_Song();
        w.play();
        Waka_Waka_Song e;
        e = p;
        e.play();
    }
}