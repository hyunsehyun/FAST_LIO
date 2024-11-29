from scipy.spatial.transform import Rotation as R

# JSON에 정의된 Euler angles (degrees 단위)
camera0_rotation = [-90.0, 0.0, -90.0]

# 회전 행렬 계산
rotation_matrix = R.from_euler('xyz', camera0_rotation, degrees=True).as_matrix()

# 출력 (보기 좋게 포맷팅)
for row in rotation_matrix:
    print([round(val, 6) for val in row])