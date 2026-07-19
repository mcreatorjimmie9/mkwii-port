/* Function at 0x806A7228, size=164 bytes */
/* Stack frame: 16 bytes */
/* Calls: 3 function(s) */

void FUN_806A7228(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x806A7230
    *(0x14 + r1) = r0; // stw @ 0x806A7234
    r3 = *(0 + r3); // lwz @ 0x806A7238
    r3 = *(0 + r3); // lwz @ 0x806A723C
    r0 = *(0 + r3); // lwz @ 0x806A7240
    if (>=) goto 0x0x806a726c;
    if (>=) goto 0x0x806a7260;
    if (>=) goto 0x0x806a727c;
    /* b 0x806a72a8 */ // 0x806A725C
    if (>=) goto 0x0x806a7294;
    /* b 0x806a72a8 */ // 0x806A7268
    if (>=) goto 0x0x806a72a8;
    if (>=) goto 0x0x806a7294;
    /* lis r3, 0 */ // 0x806A727C
    /* li r4, 0x55 */ // 0x806A7280
    r3 = *(0 + r3); // lwz @ 0x806A7284
    /* li r5, 0 */ // 0x806A7288
    FUN_80698C44(r3, r4, r5); // bl 0x80698C44
    /* b 0x806a72a8 */ // 0x806A7290
    /* lis r3, 0 */ // 0x806A7294
    /* li r4, 0x5b */ // 0x806A7298
    r3 = *(0 + r3); // lwz @ 0x806A729C
    /* li r5, 0 */ // 0x806A72A0
    FUN_80698C44(r3, r4, r5); // bl 0x80698C44
    /* lis r3, 0 */ // 0x806A72A8
    /* li r4, 0 */ // 0x806A72AC
    r3 = *(0 + r3); // lwz @ 0x806A72B0
    /* li r5, 0xff */ // 0x806A72B4
    FUN_80698CD0(r3, r4, r5); // bl 0x80698CD0
    r0 = *(0x14 + r1); // lwz @ 0x806A72BC
    return;
}