# 2023년 1회 15번
# set(집합) | 실행 결과

a = {'한국', '중국', '일본'}			# 셋 생성
a.add('베트남')						# 항목 추가
a.add('중국')						# 항목 추가 (중복 X)
a.remove('일본')						# 항목 제거
a.update(['홍콩', '한국', '태국'])		# 여러 항목 추가 (중복 X)

print(a)							# 순서 상관 없음