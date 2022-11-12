// float * array_einlesen(FILE * input_path, int length)
// {
//     if (input_path == NULL)
//     {
//         printf("Input file doesn't exist");
//         exit(-1);
//     }

//     static float storage[100];
//     // for (int i = 0; i < length; i++)
//     // {
//     //     fscanf(input_path, " %f", &storage[i]);
//     // }
//     int i;
//     while (!feof(input_path))
//         {
//             fscanf(input_path, "%f", &storage[i]);  
//             i++; 
//         }

//     return storage;
// }

// int main()
// {
//     FILE * input_file = fopen("input-a5.txt", "r");

//     int get_length, dummy;
//     while (!feof(input_file))
//     {
//         fscanf(input_file, "%f", &dummy);  
//         get_length++;
//     }
    
//     float * array_pointer;
//     array_pointer = array_einlesen(input_file, get_length);

//     fclose(input_file);

//     for (int i = 0; i < get_length; i++)
//     {
//         printf("Value %d : %f\n", i, *(array_pointer +i));
//     }
// }