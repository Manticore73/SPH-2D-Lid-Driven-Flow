#ifndef IO_H
#define IO_H

void write_header(FILE* fp, int n);
void write_frame_data(FILE* fp, int n, float* x, int* c);
void plot_data(FILE* fplt, float *x, float *v, int n);

#endif /* IO_H */
