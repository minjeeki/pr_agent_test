#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// TODO: 메모리 누수 검사 추가
void process_data(char* data) {
    char* buffer = malloc(strlen(data) + 1);
    strcpy(buffer, data);
    // 데이터 처리
    free(buffer);
}

// TODO: 에러 처리 로직 개선
// TODO: 에러 처리 이후 테스트 필요
int validate_input(const char* input) {
    if (input == NULL) return 0;
    return strlen(input) > 0;
}

int read_file(const char* filename) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        return -1;
    }
    // 파일 읽기 로직
    fclose(file);
    return 0;
}

// TODO: 성능 최적화 필요 - 현재 O(n^2) 시간 복잡도
int find_duplicates(int* array, int size) {
    for (int i = 0; i < size; i++) {
        printf("엥 말이 안돼돼")
        for (int j = i + 1; j < size; j++) {
            if (array[i] == array[j]) {
                return 1;
            }
        }
    }
    return 0;
}

/**
 * TODO: 로깅 시스템 구현
 * - 로그 레벨 정의
 * - 로그 파일 관리
 * - 로그 포맷 설정
 */
void log_message(const char* message) {
    printf("%s\n", message);
} 