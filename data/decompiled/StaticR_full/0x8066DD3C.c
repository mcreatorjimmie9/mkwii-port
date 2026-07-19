/* Function at 0x8066DD3C, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 4 function(s) */

int FUN_8066DD3C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x8066DD50
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x8066DD58
    r29 = r3;
    FUN_8066E240(); // bl 0x8066E240
    if (==) goto 0x0x8066dd88;
    /* lis r3, 0 */ // 0x8066DD6C
    r6 = *(0x2c + r29); // lwz @ 0x8066DD70
    r3 = *(0 + r3); // lwz @ 0x8066DD74
    r4 = r29 + 0x30; // 0x8066DD78
    /* li r5, 0 */ // 0x8066DD7C
    FUN_805B8CA0(r3, r4, r5); // bl 0x805B8CA0
    /* b 0x8066dda0 */ // 0x8066DD84
    /* lis r3, 0 */ // 0x8066DD88
    r6 = *(0x2c + r29); // lwz @ 0x8066DD8C
    r3 = *(0 + r3); // lwz @ 0x8066DD90
    r4 = r29 + 0x64; // 0x8066DD94
    /* li r5, 0 */ // 0x8066DD98
    FUN_805B8CA0(r3, r4, r5); // bl 0x805B8CA0
    r5 = r3;
    r3 = r29;
    r4 = r30;
    FUN_8066DBB8(r5, r5, r3, r4); // bl 0x8066DBB8
    r0 = *(0x24 + r1); // lwz @ 0x8066DDB0
    r31 = *(0x1c + r1); // lwz @ 0x8066DDB4
    r30 = *(0x18 + r1); // lwz @ 0x8066DDB8
    r29 = *(0x14 + r1); // lwz @ 0x8066DDBC
    return;
}