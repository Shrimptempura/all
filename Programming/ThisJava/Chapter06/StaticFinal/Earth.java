package Chapter06.StaticFinal;
// 상수 선언
public class Earth {
    static final double EARTH_RADIUS = 6400;
    static final double EARTH_SURFACE_AREA;

    static {
        EARTH_SURFACE_AREA = 4 * Math.PI * EARTH_RADIUS * EARTH_RADIUS;
        // Math.PI는 자바에서 제공하는 상수
    }
}
