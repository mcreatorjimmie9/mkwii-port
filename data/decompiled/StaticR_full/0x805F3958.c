/* Function at 0x805F3958, size=76 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_805F3958(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    r7 = r3;
    *(0x14 + r1) = r0; // stw @ 0x805F3964
    r5 = *(0x8c + r3); // lwz @ 0x805F3968
    if (==) goto 0x0x805f3994;
    r0 = *(0 + r5); // lwz @ 0x805F3974
    r3 = r4 + 4; // 0x805F3978
    *(8 + r1) = r0; // stw @ 0x805F397C
    /* li r4, 0 */ // 0x805F3984
    /* li r6, 0 */ // 0x805F3988
    /* lfs f1, 0x90(r7) */ // 0x805F398C
    FUN_805E3430(r5, r4, r6); // bl 0x805E3430
    r0 = *(0x14 + r1); // lwz @ 0x805F3994
    return;
}