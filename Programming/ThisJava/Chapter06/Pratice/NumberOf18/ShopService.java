package Chapter06.Pratice.NumberOf18;

public class ShopService {
    private static ShopService singleton = new ShopService();

    private ShopService() {}

    static ShopService getInstance() {
        return singleton;
    }
}
