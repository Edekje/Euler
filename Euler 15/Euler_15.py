# Done in 5 min. haha easy peasy
# To visualise:
# Draw a 21 dot by 21 dot grid (= 20x20 squares)
# All dots left right are 1
# The number per dot symbolizes no. paths
# Add the dots above and left to get the value of the dot
# Same is done here
grid = [[1]*21]*21

for i in range(1,21):
    for j in range(1,21):
        grid[i][j] = grid[i-1][j] + grid[i][j-1]
print(grid[20][20])
