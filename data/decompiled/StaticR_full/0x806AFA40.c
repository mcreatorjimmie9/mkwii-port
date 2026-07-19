/* Function at 0x806AFA40, size=128 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 2 function(s) */

int FUN_806AFA40(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x806AFA4C
    r0 = *(0x8b5 + r3); // lbz @ 0x806AFA50
    if (==) goto 0x0x806afaac;
    /* li r0, 0 */ // 0x806AFA5C
    /* li r29, 0xa */ // 0x806AFA60
    r30 = r0 * r29; // 0x806AFA64
    /* lis r3, 0x1062 */ // 0x806AFA68
    /* lis r28, -0x8000 */ // 0x806AFA6C
    r27 = r3 + 0x4dd3; // 0x806AFA70
    /* lis r31, 0 */ // 0x806AFA74
    /* b 0x806afa9c */ // 0x806AFA78
    r0 = *(0xf8 + r28); // lwz @ 0x806AFA7C
    /* srwi r0, r0, 2 */ // 0x806AFA80
    r0 = r27 * r0; // 0x806AFA84
    /* srwi r3, r0, 6 */ // 0x806AFA88
    r0 = r3 * r29; // 0x806AFA8C
    /* mulli r4, r3, 0xa */ // 0x806AFA90
    r3 = r0 + r30; // 0x806AFA94
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(0 + r31); // lwz @ 0x806AFA9C
    FUN_806E6A88(); // bl 0x806E6A88
    if (==) goto 0x0x806afa7c;
    r0 = *(0x24 + r1); // lwz @ 0x806AFAB0
    return;
}