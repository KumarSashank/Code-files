package databases;

import java.sql.*;

public class student {
    public static void main(String[] args) {
        System.out.println("Inseting values in mysql database table");
        Connection con = null;
        String url = "jdbc:mysql://localhost:3308/";
        String db = "emp";
        String driver = "com.mysql.jdbc.Driver";
        try {
            Class.forName(driver);
            con = DriverManager.getConnection(url + db + "?characterEncoding=utf8", "root", "Kumar@2003");
            try {
                Statement st = con.createStatement();
                String sql = "INSERT INTO studentmarks " + "VALUES('KumarSashank','AP20110010229',10,10,25)";
                System.out.println(sql);
                int val = st.executeUpdate(sql);
                System.out.println("1 rwo affected");
            } catch (SQLException s) {
                System.out.println("SQL statement not executed " + s.getMessage());
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}