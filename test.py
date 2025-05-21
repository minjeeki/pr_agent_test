def calculate_total(items):
    total = 0
    for item in items:
        total += item['price'] * item['quantity']
    return total

# TODO: 가격 계산 시 세금 계산 로직 추가
def calculate_price(price, quantity):
    return price * quantity

# TODO: 사용자 입력값 검증 로직 강화
def validate_user_input(input_str):
    if not input_str:
        return False
    return len(input_str) > 0

# TODO: 에러 처리 로직 개선
# - 네트워크 오류 처리
# - 타임아웃 처리
# - 재시도 로직 추가
async def fetch_data(url):
    try:
        async with aiohttp.ClientSession() as session:
            async with session.get(url) as response:
                return await response.json()
    except Exception as e:
        print(f"Error: {e}")
        return None

# TODO: 성능 최적화 필요 - 현재 O(n^2) 시간 복잡도
def find_duplicates(array):
    duplicates = []
    for i in range(len(array)):
        for j in range(i + 1, len(array)):
            if array[i] == array[j]:
                duplicates.append(array[i])
    return duplicates 