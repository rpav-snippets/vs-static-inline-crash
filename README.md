This crashes as of Visual Studio 2017 15.9.0 Preview 2.0.

As run from git bash:

```
trace() 00007FF75C0350F0
trace() 00007FF75C0350F0
~trace() 00007FF75C0350F0 7
~trace() 00007FF75C0350F0 Segmentation fault
```

**Followup**: Apparently building with `/GL` for whole program optimization
will work around this.
