# 6-1에선 사, 파, 바에 있는 각 픽셀의 평균값을 구해서 가장 가까운 사진을 골랐다.
# 이는 각 사파바 사진임을 미리 알고 있었기 때문에 각 과일의 평균을 구할수 있었지만
# 진짜 비지도 학습에서는 사진에 어떤 과일이 들어 있는지 알지 못한다.

# 이런 경우 평균값을 구하는 방법 -> k-평균(k-means) 군집 알고리즘이 평균값을 자동으로 찾아준다.
# 이 평균값이 클러스터 중심에 위치하기 때문에 클러스터 중심 또는 센트로이드라고 불린다.

# k-평균 알고리즘 작동방식
# 1. 무작위로 k개의 클러스터 중심을 정한다.
# 2. 각 샘플에서 가장 가까운 클러스터 중심을 찾아 해당 클러스터의 샘플로 지정한다.
# 3. 클러스터에 속한 샘플의 평균값으로 클러스터 중심을 변경한다.
# 4. 클러스터 중심에 변화가 없을 때까지 2번으로 돌아가서 반복한다.

# KMeans 클래스는 훈련 데이터 샘플에서 클러스터 중심까지 거리로 변환해 주는 tranform() 메서드를 가지고 있다.
# transform() 메서드가 있다는 것은 마치 StandardScaler 클래스터럼 특성값을 변환하는 도구로 사용할수 있다는 뜻이다.

# 우리는 임의의로 타깃값을 사용하지 않고 n_clusters를 3으로 지정했다. 실전에서는 클러스터 개수조차 알수없다.
# 그럼 어떻게 n_clusters를 지정해야 할까? 최적의 클러스터 개수는??

# <최적의 k 찾기>
# k-평균 알고리즘의 단점 중 하나는 클러스터 개수를 사전에 지정해야한다.
# 사실 군집 알고리즘에서 적절한 k 값을 찾기 위한 완벽한 방법은 없다.
# 대표적인 방법인 엘보우 방법이 있다.

# k-평균 알고리즘은 클러스터 중심과 클러스터에 속한 샘플 사이의 거리를 잴 수 있다. 
# 이 거리의 제곱 합을 이너셔라고 불린다. 
# 이너셔는 클러서터에 속한 샘플이 얼마나 가깝게 모여 있는지를 나타내는 값으로 생각할수 있다.

# 일반적으로 클러스터 개수가 늘어나면 클러스터 개개의 크기는 줄어들기 때문에 이너셔도 줄어든다.
# 엘보우 방법은 클러스터 개수를 늘려가며 이너셔의 변화를 관찰하여 최적의 클러스터 개수를 찾는 방법이다.

# 클러스터 개수를 증가시키면서 이너셔를 그래프로 그리면 감소하는 속도가 꺾이는 지점이 있다.
# 이 지점부터는 클러스터 개수를 늘려도 클러스터에 잘 밀집된 정도가 크게 개선되지 않는다.
# 즉 이너셔가 줄어들지 않는다. 이게 바로 n_clusters 값이다.

# k-평균 알고리즘은 사전에 클러스터 개수를 미리 지정해야 한다. 
# 최적의 클러스터 k를 알아내는 방법 한가지는 클러스터가 얼마나 밀집되어 있는지 나타내는 이너셔를 이용한다.
# 이너셔가 더 이상 크게 줄어들지 않는다면 클러스터 개수를 늘리는 것은 효과가 없다. -> 이를 엘보우 방법이다.

