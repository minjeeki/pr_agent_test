public class Test {
    private String name;
    private int age;

    // TODO: 생성자에 유효성 검사 추가
    public Test(String name, int age) {
        this.name = name;
        this.age = age;
    }

    // TODO: 나이 범위 검증 로직 추가 (0-150)
    public void setAge(int age) {
        this.age = age;
    }

    /* TODO: 데이터베이스 연결 로직 개선
     * - 연결 풀 사용
     * - 타임아웃 설정
     * - 재연결 로직
     */
    public void connectToDatabase() {
        try {
            // 데이터베이스 연결 코드
        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    // TODO: 메모리 누수 가능성 있는 코드 수정
    public void processLargeData() {
        List<String> data = new ArrayList<>();
        // 데이터 처리 로직
    }

    /**
     * TODO: 로깅 시스템 개선
     * - 로그 레벨 설정
     * - 로그 파일 관리
     * - 로그 포맷 정의
     */
    public void logActivity(String activity) {
        System.out.println(activity);
    }
} 