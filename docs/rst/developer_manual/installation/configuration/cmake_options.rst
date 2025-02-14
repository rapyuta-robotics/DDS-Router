.. include:: ../../../exports/alias.include
.. include:: ../../../exports/roles.include

.. _cmake_options:

#############
CMake options
#############

*eProsima DDS Router* provides numerous CMake options for changing the behavior and configuration of
*DDS Router*.
These options allow the developer to enable/disable certain *DDS Router* settings by defining these options to
``ON``/``OFF`` at the CMake execution, or set the required path to certain dependencies.

.. warning::
    These options are only for developers who installed *eProsima DDS Router* following the compilation steps
    described in :ref:`developer_manual_installation_sources_linux`.

.. list-table::
    :header-rows: 1

    *   - Option
        - Description
        - Possible values
        - Default
    *   - :class:`CMAKE_BUILD_TYPE`
        - CMake optimization build type.
        - ``Release`` |br|
          ``Debug``
        - ``Release``
    *   - :class:`COMPILE_TOOLS`
        - Build the *DDS Router* application tool `ddsrouter`.
        - ``OFF`` |br|
          ``ON``
        - ``ON``
    *   - :class:`BUILD_TESTS`
        - Build the *DDS Router* application and documentation |br|
          tests. Setting :class:`BUILD_TESTS` to ``ON`` sets |br|
          :class:`BUILD_APP_TESTS` and :class:`BUILD_DOCUMENTATION_TESTS` |br|
          to ``ON``.
        - ``OFF`` |br|
          ``ON``
        - ``OFF``
    *   - :class:`BUILD_APP_TESTS`
        - Build the *DDS Router* application tests. It is |br|
          set to ``ON`` if :class:`BUILD_TESTS` is set to ``ON``. |br|
        - ``OFF`` |br|
          ``ON``
        - ``OFF``
    *   - :class:`BUILD_DOCUMENTATION_TESTS`
        - Build the *DDS Router* documentation tests. It is |br|
          set to ``ON`` if :class:`BUILD_TESTS` is set to ``ON``. |br|
        - ``OFF`` |br|
          ``ON``
        - ``OFF``
    *   - :class:`LOG_INFO`
        - Activate *DDS Router* execution logs. It is |br|
          set to ``ON`` if :class:`CMAKE_BUILD_TYPE` is set |br|
          to ``Debug``.
        - ``OFF`` |br|
          ``ON``
        - ``ON`` if ``Debug`` |br|
          ``OFF`` otherwise
