
package af_rodriguez_deber2;
import java.awt.BorderLayout;
/**
 *
 * @author MAURY DJ
 */
public class AF_Rodriguez_deber2 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        int numero = 1;
        int nuevo_sueldo;
        int sueldo_inicial = 400;

        switch (numero) {
            case 1:
                System.out.println("Categoria 1");
                System.out.println("Su sueldo anterio es:" + sueldo_inicial);
                System.out.println("Su nuevo sueldo es: " + sueldo_inicial * 15 / 10);

                break;
            case 2:
                System.out.println("Categoria 2");
                System.out.println("Su sueldo anterio es:" + sueldo_inicial);
                System.out.println("Su nuevo sueldo es: " + sueldo_inicial * 10 / 100);
                break;
            case 3:
                System.out.println("Categoria 3");
                System.out.println("Su sueldo anterio es:" + sueldo_inicial);
                System.out.println("Su nuevo sueldo es: " + sueldo_inicial * 8 / 100);
                break;
        }
    }
    
}
