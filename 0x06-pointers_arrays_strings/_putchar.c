<<<<<<< HEAD
#include "main.h"                                                                                                                  
#include <unistd.h>                                                                                                                     
                                                                                                                                        
/**                                                                                                                                     
 * _putchar - writes the character c to stdout                                                                                          
 * @c: The character to print                                                                                                           
 *                                                                                                                                      
 * Return: On success 1.                                                                                                                
 * On error, -1 is returned, and errno is set appropriately.                                                                            
 */                                                                                                                                     
=======
#include "main.h"                              
#include <unistd.h>                                                                                                                                       
/**                                                                                                                                     
* _putchar - writes the character c to stdout                                                                                          
* @c: The character to print                                                                                                           
*                                                                                                                                      
* Return: On success 1.                                                                                                                
* On error, -1 is returned, and errno is set appropriately.                                                                            
*/                                                                                                                                     
>>>>>>> c4d2b3604f0d3c092729e811172541cd16ed1af5
int _putchar(char c)                                                                                                                    
{                                                                                                                                       
	return (write(1, &c, 1));                                                                                                       
}
<<<<<<< HEAD

=======
>>>>>>> c4d2b3604f0d3c092729e811172541cd16ed1af5
