// Standard libraries for the project
#include <math.h>

// List of parabolic functions for the main program

/* This function calculates the maximum height of a projectile with 3 data
 * Initial velocity -> in m/s
 * Angle of launch -> Rad because trigonometry functions in c only works with radians
 * G_constant -> in m/s^2 the standard is 9.81
*/
float maximum_height(float initial_velocity, float angle, float g_constant);
/* This function calculates the maximum scope of a projectile with 3 data
 * Initial velocity -> in m/s
 * Angle of launch -> Rad because trigonometry functions in c only works with radians
 * G_constant -> in m/s^2 the standard is 9.81
 */
float maximum_scope(float initial_velocity, float angle, float g_constant);
/*
 * This function calculates all the velocities and his angle with 3 data
 * Initial velocity -> in m/s
 * Angle of launch -> Rad
 * G_constant -> in m/s^2
 */
float velocity_in_x(float initial_velocity, float angle);
float velocity_in_y(float initial_velocity, float angle, float g_constant, float time);
float velocity(float vox, float voy);
float angle_velocity(float vox, float voy);

/*
 * This function calculates the flight time of the projectile
 * Initial velocity -> in m/s
 * Angle of launch -> Rad
 * G_constant -> in m/s^2
 */
float flight_time(float initial_velocity, float angle, float g_constant);

/*
 * Impact time for the case 1 considering duck height, angle, initial velocity, duck velocity
 */
float impact_time(float height, float initial_velocity, float duck_velocity, float angle);

/*
 * Velocity for the case 2 considering duck height, angle, duck velocity
 */
float velocity_2(float height, float duck_velocity, float angle, float g_constant);

/*
 * Height for the case 3 considering angle, initial velocity, duck velocity
 */
float height_3(float initial_velocity, float duck_velocity, float angle, float g_constant);

// Full form of functions that I use in the program

/*
 * Maximum height
 * This functions read the data and calculates firstly the initial velocity multiplicand by sinf because
 * the return of this function will be in float, and after that, square the value and divide by 2g
 */
float maximum_height(float initial_velocity, float angle, float g_constant){
    return ((initial_velocity* sinf(angle))*(initial_velocity* sinf(angle)))/(2*g_constant);
}

/*
 * Maximum scope
 * This function read the data and calculate firstly the square of the initial velocity, after
 * multiplicand by sinf*2angle, and divided by g
 */
float maximum_scope(float initial_velocity, float angle, float g_constant){
    return ((initial_velocity*initial_velocity)*(sinf(2*angle)))/g_constant;
}

/*
 * Velocities
 * For the velocity in x is initial velocity multiplied by cosf of the angle
 */
float velocity_in_x(float initial_velocity, float angle){
    return (initial_velocity* cosf(angle));
}

float velocity_in_y(float initial_velocity, float angle, float g_constant, float time){
    return (initial_velocity* sinf(angle)-(g_constant*time));
}

float velocity(float vox, float voy){
    return sqrtf((vox*vox)+(voy*voy));
}

float angle_velocity(float vox, float voy){
    return (atanf(voy/vox));
}

/*
 * Flight time
 */
float flight_time(float initial_velocity, float angle, float g_constant){
    return ((2*initial_velocity* sinf(angle))/g_constant);
}

/*
 * Impact time
 */

float impact_time(float height, float initial_velocity, float duck_velocity, float angle){
    return (height/(tanf(angle)*(initial_velocity* cosf(angle)-duck_velocity)));
}

/*
 * Velocity case 2
 */
float velocity_2(float height, float duck_velocity, float angle, float g_constant){
    return ((height*g_constant+(2*(duck_velocity*duck_velocity)*(tanf(angle)* tanf(angle))))/(2*duck_velocity* cosf(angle)*(tanf(angle)*
                                                                                                                            tanf(angle))));
}

/*
 * Height case 3
 */

float height_3(float initial_velocity, float duck_velocity, float angle, float g_constant){
    return ((2*(tanf(angle)* tanf(angle))*(initial_velocity* cosf(angle)-duck_velocity)*duck_velocity)/g_constant);
}





