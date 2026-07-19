/* Function at 0x806FCB84, size=40 bytes */
/* Stack frame: 1216 bytes */
/* Saved registers: r20 */
/* Calls: 1 function(s) */

int FUN_806FCB84(int r3, int r4, int r5)
{
    /* Stack frame: -1216(r1) */
    /* saved r20 */
    /* stmw r20, 0x490(r1) */ // 0x806FCB90
    r21 = r4;
    r22 = r5;
    r3 = r21;
    /* li r4, 0 */ // 0x806FCBA4
    FUN_805E3430(r5, r3, r4); // bl 0x805E3430
}