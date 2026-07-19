/* Function at 0x808F5BD4, size=104 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_808F5BD4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x808F5BE8
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x808F5BF0
    r29 = r3;
    r0 = *(0xfc + r3); // lwz @ 0x808F5BF8
    if (==) goto 0x0x808f5c18;
    r4 = r0;
    r5 = r30;
    FUN_808F5A58(r4, r5); // bl 0x808F5A58
    if (==) goto 0x0x808f5c20;
    *(0xfc + r29) = r30; // stw @ 0x808F5C18
    *(0x100 + r29) = r31; // stw @ 0x808F5C1C
    r0 = *(0x24 + r1); // lwz @ 0x808F5C20
    r31 = *(0x1c + r1); // lwz @ 0x808F5C24
    r30 = *(0x18 + r1); // lwz @ 0x808F5C28
    r29 = *(0x14 + r1); // lwz @ 0x808F5C2C
    return;
}