# Computer-Graphics-And-Image-Processing-Lab-Works
## Bresenham's Line Drawing Algorithm for \( m > 1 \)
### Introduction

Bresenham's Line Drawing Algorithm is commonly used for drawing lines on a raster display. The original algorithm is optimized for lines with slopes \( 0 < m < 1 \), meaning the absolute value of the slope is less than 1. When the slope exceeds 1 (\( m > 1 \)), the algorithm needs to be adjusted to maintain its efficiency and accuracy.

### Adjustments

1. **Role Swap of \( x \) and \( y \)**:
   - When the slope (\( m > 1 \)), the algorithm swaps the roles of \( x \) and \( y \) during the calculations.
   - Instead of incrementing \( x \) by 1 at each step, we increment \( y \) by 1, and vice versa.
   - This adjustment ensures that the algorithm handles steep slopes accurately.

2. **Recalculation of Decision Parameter (\( D \))**:
   - The decision parameter (\( D \)) is recalculated based on changes in the y-coordinate.
   - This ensures that the algorithm selects pixels along the line's trajectory accurately.

3. **Precise Pixel Selection**:
   - By swapping the roles of \( x \) and \( y \), the algorithm ensures precise determination of pixel selection along the line's trajectory.
   - This adjustment maintains the accuracy of the algorithm even for lines with slopes greater than 1.


Slope \( 0 < m < 1 \))

![Screenshot](https://github.com/sanjid-007/Computer-Graphics-And-Image-Processing-Lab-Works/blob/main/m-lesser-than-1.png)

Slope \( m > 1 \)

![Screenshot](https://github.com/sanjid-007/Computer-Graphics-And-Image-Processing-Lab-Works/blob/main/m-greater-than-1.png)


![Screenshot](https://github.com/sanjid-007/Computer-Graphics-And-Image-Processing-Lab-Works/blob/main/full-code-1.png)


![Screenshot](https://github.com/sanjid-007/Computer-Graphics-And-Image-Processing-Lab-Works/blob/main/full-code-2.png)
