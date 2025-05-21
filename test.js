// 일반적인 함수
function calculateTotal(items) {
  let total = 0;
  for (const item of items) {
    total += item.price * item.quantity;
  }
  return total;
}

// TODO: 가격 계산 시 세금 계산 로직 추가 필요
function calculatePrice(price, quantity) {
  return price * quantity;
}

// TODO: 사용자 입력값 검증 로직 강화
function validateUserInput(input) {
  if (!input) return false;
  return input.length > 0;
}

/* TODO: 에러 처리 로직 개선
   - 네트워크 오류 처리
   - 타임아웃 처리
   - 재시도 로직 추가
*/
async function fetchData(url) {
  try {
    const response = await fetch(url);
    return await response.json();
  } catch (error) {
    console.error("Error:", error);
    return null;
  }
}

// TODO: 성능 최적화 필요 - 현재 O(n^2) 시간 복잡도
function findDuplicates(array) {
  const duplicates = [];
  for (let i = 0; i < array.length; i++) {
    for (let j = i + 1; j < array.length; j++) {
      if (array[i] === array[j]) {
        duplicates.push(array[i]);
      }
    }
  }
  return duplicates;
}
