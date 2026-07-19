/* Function at 0x805E2E10, size=132 bytes */
/* Stack frame: 16 bytes */
/* Calls: 3 function(s) */

void FUN_805E2E10(int r3)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x805E2E18
    *(0x14 + r1) = r0; // stw @ 0x805E2E1C
    r3 = *(0 + r3); // lwz @ 0x805E2E20
    r0 = *(0x4c + r3); // lbz @ 0x805E2E24
    if (!=) goto 0x0x805e2e78;
    /* lis r3, 0 */ // 0x805E2E30
    r3 = *(0 + r3); // lwz @ 0x805E2E34
    r0 = *(0x2d + r3); // lbz @ 0x805E2E38
    if (!=) goto 0x0x805e2e50;
    /* lis r3, 0 */ // 0x805E2E44
    r3 = *(0 + r3); // lwz @ 0x805E2E48
    FUN_80698714(r3); // bl 0x80698714
    /* lis r3, 0 */ // 0x805E2E50
    r3 = *(0 + r3); // lwz @ 0x805E2E54
    r0 = *(0x2d + r3); // lbz @ 0x805E2E58
    if (!=) goto 0x0x805e2e78;
    /* lis r3, 0 */ // 0x805E2E64
    r3 = *(0 + r3); // lwz @ 0x805E2E68
    if (==) goto 0x0x805e2e78;
    FUN_80909EA0(r3); // bl 0x80909EA0
    /* lis r3, 0 */ // 0x805E2E78
    r3 = *(0 + r3); // lwz @ 0x805E2E7C
    FUN_806E3340(r3); // bl 0x806E3340
    r0 = *(0x14 + r1); // lwz @ 0x805E2E84
    return;
}