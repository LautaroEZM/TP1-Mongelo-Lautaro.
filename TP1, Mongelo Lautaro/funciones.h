#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

float funcionDato ();
/** \brief Solicita al usuario que ingrese un numero para guardarlo en una variable.
 * \param No recibe ningún parametro.
 * \return devuelve el numero ingresado por el usuario.
 */

float funcionSuma (float a, float b);
/** \brief Suma los dos numeros ingresados por el usuario.
 * \param operando 1 y operando 2(ingresados por el usuario).
 * \return
 */
float funcionResta (float a, float b);
/** \brief Resta el segundo operando al primer operando.
 * \param operando 1 y operando 2(ingresados por el usuario).
 * \return Devuelve la resta del segundo operando al primer operando.
 */
float funcionDiv (float a, float b);
/** \brief Divide el primer perando por el segundo operando.
 * \param operando 1 y operando 2(ingresados por el usuario).
 * \return Devuelve la division del segundo operando al primer operando.
 */
float funcionMult (float a, float b);
/** \brief Multiplica el primer operando por el segundo operando.
 * \param operando 1 y operando 2(ingresados por el usuario).
 * \return Devuelve la multiplicacion del segundo operando al primer operando.
 */
long long int funcionFact (int a);
/** \brief Calcula el factorial del primer operando.
 * \param  Operando 1 (ingresado por el usuario.
 * \return Devuelve el resultado del factorial del primer operando.
 */


#endif // FUNCIONES_H_INCLUDED
